//
//  AddAnimationViewController.h
//  video editor
//
//  Created by Sekou Perry on 8/23/16.
//  Copyright © 2016 Sekou Perry. All rights reserved.
//

#import "CommonVideoViewController.h"

@interface AddAnimationViewController : CommonVideoViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl *animationSelectSegment;

- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

@end
