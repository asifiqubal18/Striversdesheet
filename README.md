
<!---->POST request for Signup-->
Creates a new User and returns the new object.

URL Params/Auth/Signup
None
Headers
Content-Type: application/json
data Params
  {
    user_name: string,
    email: string
    phone_number: string
    password: string
    
  }
Success Response:
Code: 200

Content: { "SIGNUP SUCCESFULL" }

Error Response:
Code: 404

Content: { error :
        {user_name: " username is not in standard format"},
        {email: "Email is not upto standard"},
        {phone_number: "Phone number is not valid"},
        {password: "You must follow standard for password"}
}

<!----> GET request for Login-->

Returns the specified user.

URL Params/Auth/Login
Required: id=[integer]
Data Params{
    email: string,
    password: string,
}
None
Headers
Content-Type: application/json
Authorization: Bearer <OAuth Token>
Success Response:
Code: 200
Content: { "SUCCESSFULLY LOGEDIN" }
Error Response:
Code: 404
Content: { error message : 
     {email: "Email is not correct"},
     {password: "Password does not match"},
}
OR
Code: 401
Content: { error : error : "You are unauthorized to make this request." }

