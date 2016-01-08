//
//  MusicLibrary.h
//  Algorhythm
//
//  Created by Graeme Harrison on 2015-12-29.
//  Copyright © 2015 Graeme Harrison. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;

@end
