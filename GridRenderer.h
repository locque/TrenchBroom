/*
Copyright (C) 2010-2011 Kristian Duske

This file is part of TrenchBroom.

TrenchBroom is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

TrenchBroom is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with TrenchBroom.  If not, see <http://www.gnu.org/licenses/>.
*/

#import <Cocoa/Cocoa.h>

@class VBOBuffer;
@protocol Face;

@interface GridRenderer : NSObject {
@private
    NSMutableSet* faces;
    VBOBuffer* vbo;
    int vertexCount;
    BOOL valid;
    int gridSize;
}

- (id)initWithGridSize:(int)theGridSize;

- (void)addFace:(id <Face>)theFace;
- (void)removeFace:(id <Face>)theFace;

- (void)setGridSize:(int)theGridSize;
- (void)render;

- (void)invalidate;

@end
