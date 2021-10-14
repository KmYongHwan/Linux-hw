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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x329de697, "dvb_create_media_graph" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x8709abd5, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x5ada0011, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3feecaf6, "dvb_dmx_swfilter_raw" },
	{ 0xfb578fc5, "memset" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0xda4c81b, "media_device_cleanup" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xde725bff, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x71deb539, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x8a275f6b, "media_device_unregister" },
	{ 0xede283d, "release_firmware" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xb3927325, "dvb_dmxdev_init" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "rc-core,dvb-core,mc");


MODULE_INFO(srcversion, "A98091D964200C88ACB1A38");
