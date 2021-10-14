#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0xe0f3e65d, "free_orinocodev" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0xc890a7e6, "orinoco_if_del" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0x74ecbf6f, "orinoco_if_add" },
	{ 0x6cf3d081, "orinoco_init" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0xffe27bca, "orinoco_interrupt" },
	{ 0x20b542b4, "hermes_struct_init" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0x3a583436, "alloc_orinocodev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x983f550b, "pcmcia_reset_card" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x85e4ab82, "orinoco_down" },
	{ 0x320d7282, "orinoco_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,orinoco,cfg80211,pcmcia_core");

MODULE_ALIAS("pcmcia:m0101c0777f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Bc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01EBc080Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0261c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0268c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0268c0003f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0305f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02AAc0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02ACc0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02ACc3021f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m14EAcB001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa41240E5Bpb56010AF3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5CD01705pb4271660Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78FC06EEpb45A50C1Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78FC06EEpbDB9AA842pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD8A43B78pb0D341169pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa35DADC74pb01F7FEDBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa32D445F5pbEDEFFD90pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEF544D24pbCD8EA916pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4507A33ApbEF54F0E3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa56CC3F1Apb0BCF220Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb07F58077pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7E3B326Apb49893E92pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23EB9949pbC562E72Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pb7360E410pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pbF57CA4B3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa24358CD4pbC562E72Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2D617EA0pb88CD5767pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4AC44287pb235A6BEDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC6536A5Epb090C3CD9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC6536A5Epb9F494E26pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa43D74CB4pb579BD91Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3F02B4D6pb3663CB0Epc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa*pb*pcD27DEB1Apd*");

MODULE_INFO(srcversion, "BAD0F6933AD5D449D221661");
