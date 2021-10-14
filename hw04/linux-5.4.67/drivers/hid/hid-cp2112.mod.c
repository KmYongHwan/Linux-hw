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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x148fa2d1, "gpiochip_irqchip_add_key" },
	{ 0x75c0bf03, "handle_simple_irq" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0x6626afca, "down" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xcf2a6966, "up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xd1afe18b, "sysfs_chmod_file" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x96848186, "scnprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xd2c8c178, "gpiochip_free_own_desc" },
	{ 0xba455a59, "gpiochip_unlock_as_irq" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000010C4p0000EA90");

MODULE_INFO(srcversion, "929320E9F957751273953C4");
