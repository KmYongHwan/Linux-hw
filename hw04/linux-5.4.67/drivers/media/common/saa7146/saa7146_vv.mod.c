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
	{ 0xe26c8ec6, "videobuf_to_dma" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd846aad2, "videobuf_mmap_mapper" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1d9bb344, "videobuf_queue_cancel" },
	{ 0x83ee711c, "videobuf_streamon" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd41256ef, "videobuf_iolock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3a9f8ab5, "saa7146_pgtable_free" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8326fa45, "saa7146_pgtable_alloc" },
	{ 0x3873d3f6, "videobuf_read_one" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xa71ec28a, "videobuf_qbuf" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x151a65d2, "saa7146_pgtable_build_single" },
	{ 0x823f09c9, "videobuf_querybuf" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x610fdfde, "videobuf_read_stream" },
	{ 0x63a9e2f, "videobuf_dma_unmap" },
	{ 0xcddf0e99, "videobuf_queue_sg_init" },
	{ 0x1f1b30eb, "videobuf_stop" },
	{ 0x3adbd595, "v4l2_field_names" },
	{ 0xf720a60b, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe3cd9b5c, "saa7146_debug" },
	{ 0x48101fd5, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x51a432, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c35809d, "videobuf_reqbufs" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x61fdd13a, "videobuf_dma_free" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x49909fcf, "videobuf_poll_stream" },
	{ 0x68ae0f05, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x69f2e717, "v4l2_fh_exit" },
	{ 0x4fc951d4, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-dma-sg,videodev,videobuf-core,saa7146");


MODULE_INFO(srcversion, "470AF872693855FA11FC1F1");
