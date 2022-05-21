<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<link
	href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css"
	rel="stylesheet"
	integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3"
	crossorigin="anonymous">
<title>Book</title>
</head>
<body>
	<nav class="navbar navbar-dark bg-dark">
		<div class="container-fluid">
			<a class="navbar-brand">Mattress APP!</a> <a
				class="nav-link active" style="color: white">Add new Mattress</a>
		</div>
	</nav>
	<div class="container">
		<h2 style="text-align: center; margin-top: 50px">Add new Mattress Details</h2>
		<hr>
		<div class="row justify-content-center">
			<div class="col-lg-10">
				<div class="card shadow-lg border-0 rounded-lg mt-1">
					
					<div class="card-body">
						<form action="add-mattress" method="post">

							<div class="form-floating mb-3">
								<input class="form-control" id="person" type="text"
									name="person" placeholder="Enter Number of Persons" required /> 
									<label for="person">Number of Persons</label>
							</div>
							
							<div class="form-floating mb-3">
								<input class="form-control" id="matttresstype" type="text"
									name="mattresstype" placeholder="Enter Mattress Type" pattern="^([A-Za-z]+[,.]?[ ]?|[A-Za-z]+['-]?)+$" required /> 
								<label for="matttresstype">Mattress Type</label>
							</div>
							
							
							<div class="form-floating mb-3">
								<input class="form-control" id="layers" type="text" 
								name="layers" placeholder="Enter Number of Layers" pattern="^([A-Za-z]+[,.]?[ ]?|[A-Za-z]+['-]?)+$" required  /> 
								<label for="layers">Layers</label>
							</div>
							
							<div class="form-floating mb-3">
								<input class="form-control" id="price" type="text" 
								name="price" placeholder="Enter Price of Mattress" pattern="^([A-Za-z]+[,.]?[ ]?|[A-Za-z]+['-]?)+$" required  /> 
								<label for="price">Price</label>
							</div>
							
							<div class="mt-4 mb-0">
								<div class="d-grid">
									<input type="submit" value="Add new Mattress details" class="btn btn-primary btn-block" />
								</div>
							</div>
						</form>
					</div>
					<div class="card-footer text-center py-3">
						<div class="small">
							<a href="">View all Mattress</a>
						</div>
					</div>
				</div>
			</div>
		</div>


	</div>


	<script
		src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"
		integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p"
		crossorigin="anonymous"></script>
</body>
</html>