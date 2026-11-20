// 7. Covariant Return Types in Overriding //
class Animal {
    
    public Animal reproduce() {
        System.out.println("Animal is reproducing.");
        return new Animal();
    }

    public void makeSound() {
        System.out.println("Generic animal sound");
    }

    public void makeSound(int times) {
        for (int i = 0; i < times; i++) {
            System.out.println("Generic animal sound");
        }
    }
}

class Dog extends Animal {
    
    @Override
    public Dog reproduce() {
        System.out.println("Dog is reproducing (puppies!).");
        return new Dog();
    }
}

 class AniamlMain {
    public static void main(String[] args) {

        Dog myDog = new Dog();
        Dog puppy = myDog.reproduce(); 

        Animal animal = new Dog();
        Animal offspring = animal.reproduce();
        
        myDog.makeSound();
        myDog.makeSound(2);
    }
}
