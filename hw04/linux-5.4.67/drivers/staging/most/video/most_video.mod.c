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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x20a4e2d6, "most_stop_channel" },
	{ 0xf90da5d8, "most_deregister_configfs_subsys" },
	{ 0x19d97174, "most_register_component" },
	{ 0x60ad394d, "video_device_release" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x66ca6520, "most_put_mbo" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0xbf86e9a2, "video_device_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd21fb248, "most_deregister_component" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x8289122b, "v4l2_fh_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f7a9585, "most_start_channel" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x93a8a3ad, "v4l2_fh_add" },
	{ 0x997bd8e8, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15d515df, "most_register_configfs_subsys" },
	{ 0x69f2e717, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "most_core,videodev");


MODULE_INFO(srcversion, "D250DE738DADFC3843E8C83");
