//
//  TBMemberCell.h
//  Talk
//
//  Created by Shire on 10/9/14.
//  Copyright (c) 2014 Teambition. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "constants.h"

@interface TBMemberCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *cellImageView;  
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imageViewTopConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imageViewBottomContraint;
@property (nonatomic) TBCellType type;

@end
