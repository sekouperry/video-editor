//
//  PlayVideoViewController.h
//  video editor
//
//  Created by Sekou Perry on 8/22/16.
//  Copyright © 2016 Sekou Perry. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <MobileCoreServices/UTCoreTypes.h>
#import <MediaPlayer/MediaPlayer.h>

#import <AVKit/AVPlayerViewController.h>

@interface PlayVideoViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>



// For opening UIImagePickerController
-(BOOL)startMediaBrowserFromViewController:(UIViewController*)controller usingDelegate:(id )delegate;


@end
