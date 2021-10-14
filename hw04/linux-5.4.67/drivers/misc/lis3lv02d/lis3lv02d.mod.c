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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xc042b99a, "input_unregister_polled_device" },
	{ 0xb56f876f, "param_get_int" },
	{ 0x90cfd5e4, "pm_runtime_barrier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x495e1a7b, "param_set_int" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x5ada0011, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x47fda759, "misc_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x2864d614, "fasync_helper" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x47a83910, "input_free_polled_device" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x7debb3cd, "pm_schedule_suspend" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5f0e284b, "input_allocate_polled_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "input-polldev");


MODULE_INFO(srcversion, "C8EA23A742D257CE7CE3DE1");
