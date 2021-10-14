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
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x68ae0f05, "v4l2_ctrl_poll" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xef62eeeb, "v4l2_i2c_new_subdev_board" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v10C4p8244d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "960EE7CAACEAD481A0BE1D9");
