# $NetBSD: Makefile,v 1.7 2016/12/04 05:17:42 ryoon Exp $

PKGREVISION= 6
.include "../../meta-pkgs/xfce4/Makefile.common"

DISTNAME=	thunar-vcs-plugin-0.1.4
PKGNAME=	xfce4-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	http://archive.xfce.org/src/thunar-plugins/thunar-vcs-plugin/0.1/

MAINTAINER=	gls@NetBSD.org
HOMEPAGE=	http://goodies.xfce.org/projects/thunar-plugins/thunar-vcs-plugin
COMMENT=	Thunar vcs integration plugin

.include "../../devel/apr/buildlink3.mk"
.include "../../devel/subversion-base/buildlink3.mk"
.include "../../sysutils/xfce4-thunar/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
