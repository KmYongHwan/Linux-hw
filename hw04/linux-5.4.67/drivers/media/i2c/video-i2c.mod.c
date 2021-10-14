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
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x8a5e9651, "vb2_ioctl_prepare_buf" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xba312d7b, "current_task" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x454c1a24, "devm_nvmem_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x4e2232a7, "__regmap_init_i2c" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f7fec7b, "regmap_exit" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0xfce9c328, "devm_hwmon_device_register_with_info" },
	{ 0xb6f50190, "regmap_get_device" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("of:N*T*Cpanasonic,amg88xx");
MODULE_ALIAS("of:N*T*Cpanasonic,amg88xxC*");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90640");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90640C*");
MODULE_ALIAS("i2c:amg88xx");
MODULE_ALIAS("i2c:mlx90640");

MODULE_INFO(srcversion, "19ED487765A48F280398A87");
