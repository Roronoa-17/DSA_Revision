void main() {
  User userone = User('k', 26);
  
  print(userone.username);
  print(userone.age);
  
  User user2 = User('Mario', 30);
  print(user2.username);
  print(user2.age);
  
  SuperUser userThree = SuperUser('yoshi', 20);
  print(userThree.username);
  userThree.publish();
}
  
class User {
  
  String username = "";
  int age = 0;
  
  User(String username, int age) {
    this.username = username;
    this.age = age;
  }
  
  void login() {
    print('user logged in');
  }
  
}

class SuperUser extends User {
  
  SuperUser(String username, int age) : super(username, age);
  
  void publish() {
    print('pubglish update');
  }
}