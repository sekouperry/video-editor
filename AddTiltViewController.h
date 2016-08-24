//
//  AddTiltViewController.h
//  video editor
//
//  Created by Sekou Perry on 8/23/16.
//  Copyright © 2016 Sekou Perry. All rights reserved.
//

#import "CommonVideoViewController.h"

@interface AddTiltViewController : CommonVideoViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl *tiltSegment;

- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

@end

