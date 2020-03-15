#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetBackgroundAuto(false);
  ofBackground(0);
  ofSetFrameRate(60);
  ofEnableAlphaBlending();
  //ofDisableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
    ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());

    int numTriangles = 10;
    int minOffset = 5;
    int maxOffset = 70;
    int alpha = 150;

    for (int t = 0; t < numTriangles; t++) {
      float offDistance = ofRandom(minOffset, maxOffset);

      // define triangle at origin (0, 0) that points to the right
      ofVec2f p1(0, 6.5);
      ofVec2f p2(25, 0);
      ofVec2f p3(0, -6.5);

      // rotate the triangle points around the origin
      float rotation = ofRandom(360);  // rotate fun uses degree
      p1.rotate(rotation);
      p2.rotate(rotation);
      p3.rotate(rotation);

      ofVec2f triangleOffset(offDistance, 0.0);
      triangleOffset.rotate(rotation);

      // shift the triangle to the mouse position
      p1 += mousePos + triangleOffset;
      p2 += mousePos + triangleOffset;
      p3 += mousePos + triangleOffset;

      ofColor myPurple(119, 69, 214, alpha);
      ofColor myBlue(52, 152, 219, alpha);
      ofColor inBetween = myPurple.getLerped(myBlue, ofRandom(1.0));

      ofSetColor(inBetween);
      ofDrawTriangle(p1, p2, p3);
    }
  }

  if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)) {
    ofBackground(0);
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
