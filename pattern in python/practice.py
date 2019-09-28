# # importing the pyttsx library 
# import pyttsx3 

# # initialisation 
# engine = pyttsx3.init() 

# # testing 
# engine.say("My first code on text-to-speech") 
# engine.say("Thank you") 
# engine.runAndWait() 

import pyttsx3 

def onStart(): 
    print('starting') 

def onWord(name, location, length): 
    print('word', name, location, length) 

def onEnd(name, completed): 
    print('finishing', name, completed) 

engine = pyttsx3.init() 

engine.connect('started-utterance', onStart) 
engine.connect('started-word', onWord) 
engine.connect('finished-utterance', onEnd) 

sen = 'qwertyuiop'


engine.say(sen) 
engine.runAndWait() 

