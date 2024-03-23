marks = {"Ramesh":23, "Vivek":40, "Harsh":88, "Mohammad":60}

def group_by_marks(marks, pass_marks)
  marks.group_by {|_, value| value < pass_marks}
       .transform_keys {|not_pass| not_pass ? 'Failed' : 'Passed'}
end

group_by_marks(marks, 30)
