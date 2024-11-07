/-
  Definition of Palindrome
-/
def isPalindrome (xs : List Nat) : Prop := xs = xs.reverse

/-
  Definition of duplication of a list k times
-/
def dup (k : Nat) (xs : List Nat) : List Nat :=
  match k with
  | 0 => []
  | k' + 1 => xs ++ (dup k' xs)


#eval dup 5 [1,2]

theorem test1 : isPalindrome [] := by rfl
theorem test2 : isPalindrome [1, 2, 1] := by rfl
theorem test3 : isPalindrome (dup 3 [1]) := by simp [dup]; rfl

/-
  TODO: prove that if xs is a Palindrome, then any duplications of xs are Palindromes as well.
-/

-- (2 points)
theorem palindrome_dup_easy1 (xs : List Nat) : isPalindrome xs → isPalindrome (dup 1 xs) := by
  intro h
  simp [dup]
  assumption

-- (3 points)
theorem palindrome_dup_easy2 (xs : List Nat) : isPalindrome xs → isPalindrome (dup 2 xs) := by
  intro h
  simp [dup]
  unfold isPalindrome
  rw [List.reverse_append]
  rw [←h]

-- (5 points)
theorem palindrome_dup_easy3 (xs : List Nat) : isPalindrome xs → isPalindrome (dup 3 xs) := by
  intro h
  simp [dup]
  unfold isPalindrome
  rw [List.reverse_append]
  rw [List.reverse_append]
  rw [<-h]
  rw [List.append_assoc]


-- (10 points)
-- the belowed theorem is a helper theorem for the next theorem
theorem append_dup_comm (xs : List Nat) : ∀ n, xs ++ dup n xs = dup n xs ++ xs := by
  intro n
  induction n with
  | zero =>
    -- Base case: xs ++ [] = [] ++ xs
    simp [dup]
  | succ n ih => -- xs ++ dup (n + 1) xs = dup (n + 1) xs ++ xs
    -- Induction step
    simp [dup] -- xs ++ dup n xs = dup n xs ++ xs
    rw [ih]

theorem palindrome_dup (xs : List Nat) : (k : Nat) -> isPalindrome xs → isPalindrome (dup k xs) := by
  intro k h
  induction k with
  | zero =>
    -- Base case: dup 0 xs = []
    unfold dup
    unfold isPalindrome
    rfl
  | succ n ih =>
    -- Induction step: Assume isPalindrome (dup n xs)
    unfold dup
    unfold isPalindrome
    rw [List.reverse_append]
    rw [<-ih, <-h]
    rw [append_dup_comm]


/-
  TODO: prove that if some duplication of xs is a Palindrome, then xs itself is also a Palindrome.
-/

-- (2 points)
theorem dup_palindrome_easy1 (xs : List Nat) : isPalindrome (dup 1 xs) -> isPalindrome xs := by
  intro h
  simp [dup] at h
  assumption

-- (3 points)
theorem dup_palindrome_easy2 (xs : List Nat) : isPalindrome (dup 2 xs) -> isPalindrome xs := by
  intro h
  simp [dup] at h
  unfold isPalindrome at h
  rw [List.reverse_append] at h
  have : xs = xs.reverse := by
    -- Comparing the two sides gives `xs = xs.reverse`
    apply List.append_inj_right h
    rw [List.length_reverse]
  -- Conclude that `xs` is a palindrome
  unfold isPalindrome
  assumption


-- (5 points)
theorem dup_palindrome_easy3 (xs : List Nat) : isPalindrome (dup 3 xs) → isPalindrome xs := by
  intro h
  simp [dup] at h
  unfold isPalindrome at h
  -- Simplify the equality using reverse properties
  rw [List.reverse_append] at h
  rw [List.reverse_append] at h
  -- Use associativity to align the structure
  rw [List.append_assoc] at h
  -- Now, define prefixes and suffixes
  let l₁ := xs
  let r₁ := xs ++ xs
  let l₂ := xs.reverse
  let r₂ := xs.reverse ++ xs.reverse
  -- Rewrite h using these definitions
  have h_new : l₁ ++ r₁ = l₂ ++ r₂ := h
  -- Confirm lengths are equal
  have length_eq : l₁.length = l₂.length := by
    rw [List.length_reverse]
  -- Apply List.append_inj
  have ⟨h₁, _⟩ := List.append_inj h_new length_eq
  -- Conclude that xs = xs.reverse
  unfold isPalindrome
  exact h₁

-- (10 points)
theorem dup_palindrome (xs : List Nat) (k : Nat) : (k > 0) -> isPalindrome (dup k xs) -> isPalindrome xs := by
  -- isPalindrome (dup k xs) -> dup k xs = (dup k xs).reverse
  -- -> dup k xs = dup (k-1) xs.reverse + xs.reverse
  -- -> by dup_decomposition, dup k xs = dup (k-1) xs + xs
  -- -> dup (k-1) xs + xs = dup (k-1) xs.reverse + xs.reverse
  -- -> xs.reverse = xs
  intro hk h
  cases k with
  | zero =>
    -- Base case: k = 0, but hk : 0 > 0 is a contradiction
    contradiction
  | succ k' =>
    simp [isPalindrome] at h
    simp [dup] at h
    -- Apply the helper theorem to rewrite the equality
    have h_comm : xs ++ dup k' xs = dup k' xs ++ xs := append_dup_comm xs k'
    rw [h_comm] at h
    -- now we have dup k' xs ++ xs = (dup k' xs).reverse ++ xs.reverse
    have h_pal : xs = xs.reverse := by
      apply List.append_inj_right h
      rw [List.length_reverse]
    -- Conclude that xs is a palindrome
    assumption
