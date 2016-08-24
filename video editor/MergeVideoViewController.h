//
//  MergeVideoViewController.h
//  video editor
//
//  Created by Sekou Perry on 8/22/16.
//  Copyright © 2016 Sekou Perry. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <MediaPlayer/MediaPlayer.h>

@interface MergeVideoViewController: UIViewController {
    BOOL isSelectingAssetOne;
}

@property(nonatomic, strong) AVAsset *firstAsset;
@property(nonatomic, strong) AVAsset *secondAsset;
@property(nonatomic, strong) AVAsset *audioAsset;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityView;

-(IBAction)loadAssetOne:(id)sender;
-(IBAction)loadAssetTwo:(id)sender;
-(IBAction)loadAudio:(id)sender;
-(IBAction)mergeAndSave:(id)sender;
-(BOOL)startMediaBrowserFromViewController:(UIViewController*)controller usingDelegate:(id)delegate;
-(void)exportDidFinish:(AVAssetExportSession*)session;

@end
