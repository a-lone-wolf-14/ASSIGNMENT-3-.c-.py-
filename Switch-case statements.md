Switch-case statement is an easier version of (if -- else if) ladder, in C programming language. In the syntax, we consider an **expression** and some **case** labels. The case labels are used to switch between various alternatives and is used like if the expression is of case label then execute the statements mentioned in the case.

**Syntax**-

switch (expression)
{
    case (label1):
        statement1
        break
    case (label2):
        statement2
        break
        .
        .
        .
        .
        .
}

**NOTE**- If we dont't use break statement after ending statements in a case, then when one case is true then it not only executes the statement of that case but also all the cases after that.
