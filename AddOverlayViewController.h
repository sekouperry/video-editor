//
//  AddOverlayViewController.h
//  video editor
//
//  Created by Sekou Perry on 8/23/16.
//  Copyright © 2016 Sekou Perry. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommonVideoViewController.h"

@interface AddOverlayViewController : CommonVideoViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl *frameSelectSegment;

- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

@end

