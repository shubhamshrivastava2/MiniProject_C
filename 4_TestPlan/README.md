# Test plan

## High level test plan
|   ID   |     Description    |       Expected I/P      | Expected O/P | Actual O/P |  Type of test  |
| :----: | :----------------: | :---------------------: | :----------: | :--------: | :------------: |
|  H_01  |  View all records  |         N/A             |  1           |   1        | Scenario based |
|  H_02  | Enter a new record | 501, "Wings of fire"    |    1         |    1       | Scenario based |
|  H_03  |   View a record    |          501            |       1      |     1      | Scenario based |
|  H_04  |   Update a record  | 501, "issued", "21/01/21", "31/01/21", "Sai","Ch", 123 | 1 | 1 | Scenario based |
|  H_05  |   Delete a record  |          501            |       1      |      1     | Scenario based |

## Low level test plan
|   ID   |     Description    |       Expected I/P      | Expected O/P | Actual O/P |  Type of test  |
| :----: | :----------------: | :---------------------: | :----------: | :--------: | :------------: |
|  L_01  | View ID and title of all the books |         N/A             |  1           |   1        | Scenario based |
|  L_02  |  Enter the details about a new book. | 501, "Wings of fire"  |    1         |    1       | Scenario based |
|  L_03  |  Search for a book by its ID and view information such as whether the book has been issued or not. If the status is issued when is the due date, the member who issued the book. |          501            |       1      |     1      | Scenario based |
|  L_04  |   This is used to update the status of a book. If a book was issued or renewed changing the due date as well as status as issued or renewed respectively.  | 501, "issued", "15/07/21", "25/08/21", "Sai","ch", 123 | 1 | 1 | Scenario based |
|  L_05  |   This is used when a book is discarded.  |          501            |       1      |      1     | Scenario based |