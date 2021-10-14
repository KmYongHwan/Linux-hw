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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x4d4c8714, "si470x_set_freq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xf2282285, "si470x_viddev_template" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x4afa81bb, "si470x_ctrl_ops" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe9c0d487, "si470x_stop" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x29361773, "complete" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xcd078a11, "si470x_start" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "62FCC59E842267299C03FB2");
