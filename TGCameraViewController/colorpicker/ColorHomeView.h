//
//  ColorHomeView.h
//  ColorPicker
//
//  Created by Fabián Cañas on 9/9/10.
//  Copyright 2010 Fabián Cañas. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ColorHomeView : UIView {
    UIColor *homeColor;
}

@property (readwrite, retain, nonatomic) UIColor *homeColor;

@end
