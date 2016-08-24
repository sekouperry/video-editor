//
//  RecordVideoViewController.h
//  video editor
//
//  Created by Sekou Perry on 8/22/16.
//  Copyright © 2016 Sekou Perry. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <MediaPlayer/MediaPlayer.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface RecordVideoViewController: UIViewController

-(IBAction)recordAndPlay:(id)sender;

-(BOOL)startCameraControllerFromViewController:(UIViewController*)controller
                                 usingDelegate:(id )delegate;


-(void)video:(NSString *)videoPath didFinishSavingWithError:(NSError *)error contextInfo:(void*)contextInfo;


@end