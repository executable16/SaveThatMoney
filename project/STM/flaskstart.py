from flask import Flask, render_template
app = Flask(__name__ , template_folder='templates')

@app.route("/")
def hello():
    return "<h1>welcome</h1>"

@app.route("/home/")
def home():
    return render_template('home.html')

@app.route("/about/")
def about():
    return render_template('about.html')

if __name__ == '__main__':
    app.run(debug=True)
#at description
