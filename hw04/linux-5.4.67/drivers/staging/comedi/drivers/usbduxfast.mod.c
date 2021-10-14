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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xcba9c20c, "comedi_usb_auto_unconfig" },
	{ 0xfe395d55, "comedi_usb_driver_unregister" },
	{ 0xb2bf0b80, "comedi_usb_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x8982a2a9, "comedi_load_firmware" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xf1f54677, "comedi_to_usb_interface" },
	{ 0x3154cb5f, "comedi_event" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x15d64b25, "comedi_nsamples_left" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xbad881fe, "comedi_to_usb_dev" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x992683c5, "comedi_usb_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_usb,comedi");

MODULE_ALIAS("usb:v13D8p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D8p0011d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1891EB3DD95AE96EBFB9242");
