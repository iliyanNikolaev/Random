Dim nameInput
Dim ageInput

nameInput = InputBox("Name:", "Enter a name")
If nameInput <> "" Then
Else
    MsgBox "Invalid Data!", vbExclamation, "Error"
End If

ageInput = InputBox("Age:", "Enter your age")
If ageInput <> "" And IsNumeric(ageInput)     
Else
    MsgBox "Invalid team selection!", vbExclamation, "Error"
End If

MsgBox "Thank you! Your data is saved!"
