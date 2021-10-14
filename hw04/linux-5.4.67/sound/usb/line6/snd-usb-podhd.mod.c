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
	{ 0xb65ea167, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x30bbe9bf, "line6_resume" },
	{ 0x71763627, "line6_probe" },
	{ 0xac15a423, "line6_disconnect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0x71c1cdf8, "snd_card_add_dev_attr" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa0863684, "line6_init_pcm" },
	{ 0xc1f0027a, "line6_suspend" },
	{ 0x1d19fda5, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x53801be1, "usb_ifnum_to_if" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4159d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4156d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "EB88139F64F6DC499581B39");
