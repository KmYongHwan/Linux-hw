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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb72d9ab3, "usb_stor_set_xfer_buf" },
	{ 0x887325f7, "usb_stor_bulk_transfer_buf" },
	{ 0x34884d7f, "usb_stor_access_xfer_buf" },
	{ 0x209d534a, "usb_stor_post_reset" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xec69e6ec, "usb_stor_disconnect" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x12943f1a, "usb_stor_probe2" },
	{ 0x2e3d6a98, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88209f9, "usb_stor_pre_reset" },
	{ 0x1fc80169, "usb_stor_reset_resume" },
	{ 0xeff43fcb, "usb_stor_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa510f90e, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0xd6555b12, "usb_stor_bulk_transfer_sg" },
	{ 0xb39b2641, "usb_stor_bulk_srb" },
	{ 0xede283d, "release_firmware" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0CF2p6250d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5BA04D8D1AFC518945A5520");
