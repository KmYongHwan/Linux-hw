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
	{ 0x2aba4823, "line6_write_data" },
	{ 0xac15a423, "line6_disconnect" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5ca2a6b2, "line6_pcm_release" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x90b322b7, "line6_pcm_acquire" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa0863684, "line6_init_pcm" },
	{ 0xc1f0027a, "line6_suspend" },
	{ 0x1d19fda5, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "83E4D0F4FC4A1266CBAA202");
