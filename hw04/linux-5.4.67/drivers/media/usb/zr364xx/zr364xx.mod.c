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
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x201e46be, "videobuf_queue_vmalloc_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3873d3f6, "videobuf_read_one" },
	{ 0x83ee711c, "videobuf_streamon" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x25ed4e21, "videobuf_queue_is_busy" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd846aad2, "videobuf_mmap_mapper" },
	{ 0xd41256ef, "videobuf_iolock" },
	{ 0x5cd1e8b, "videobuf_vmalloc_free" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x95e5ea8b, "videobuf_to_vmalloc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x999e8297, "vfree" },
	{ 0x5bb544ab, "videobuf_mmap_free" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x49909fcf, "videobuf_poll_stream" },
	{ 0x68ae0f05, "v4l2_ctrl_poll" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x4c35809d, "videobuf_reqbufs" },
	{ 0x823f09c9, "videobuf_querybuf" },
	{ 0xa71ec28a, "videobuf_qbuf" },
	{ 0x48101fd5, "videobuf_dqbuf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc951d4, "videobuf_streamoff" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,videobuf-vmalloc,videobuf-core");

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1DCA7653BF505EB69E8930");
