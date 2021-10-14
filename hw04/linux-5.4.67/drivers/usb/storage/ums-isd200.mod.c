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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb72d9ab3, "usb_stor_set_xfer_buf" },
	{ 0x209d534a, "usb_stor_post_reset" },
	{ 0x8a535e21, "usb_stor_Bulk_transport" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xec69e6ec, "usb_stor_disconnect" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x12943f1a, "usb_stor_probe2" },
	{ 0xac01a2ec, "usb_stor_transparent_scsi_command" },
	{ 0x2e3d6a98, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88209f9, "usb_stor_pre_reset" },
	{ 0x1fc80169, "usb_stor_reset_resume" },
	{ 0x9df056ce, "usb_stor_ctrl_transfer" },
	{ 0xeff43fcb, "usb_stor_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa510f90e, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xda7b25ed, "usb_stor_resume" },
	{ 0x9ce89892, "usb_register_driver" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v054Cp002Bd0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Bd010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0031d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0031d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0301d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0301d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0351d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0351d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp5701d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp5701d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF6pA001d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF6pA001d010*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2E768F2144869E5E2A26DA0");
