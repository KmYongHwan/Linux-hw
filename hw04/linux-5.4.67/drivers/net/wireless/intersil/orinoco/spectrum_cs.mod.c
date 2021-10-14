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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2597288d, "pcmcia_write_config_byte" },
	{ 0x888bc13e, "pcmcia_read_config_byte" },
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0xe0f3e65d, "free_orinocodev" },
	{ 0xc890a7e6, "orinoco_if_del" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x85e4ab82, "orinoco_down" },
	{ 0x320d7282, "orinoco_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,orinoco");

MODULE_ALIAS("pcmcia:m026Cc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb6FBF459Apc*pd*");

MODULE_INFO(srcversion, "3AB94C739E33D730889B1C8");
