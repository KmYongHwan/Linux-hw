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
	{ 0x35db28d0, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x67c97a27, "cn_add_callback" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf44a972b, "driver_register" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x785dd9f2, "device_register" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1e99399d, "hwmon_device_register_with_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xcb2565b3, "flush_signals" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ea19302, "put_device" },
	{ 0x4dd9d14d, "cn_netlink_send_mult" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd3a720f3, "sysfs_create_groups" },
	{ 0x58f308eb, "sysfs_remove_groups" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "843007ADAB610557631C9D4");
