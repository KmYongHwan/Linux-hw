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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x54d29d1e, "ieee802154_rx_irqsafe" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x29361773, "complete" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x59260404, "debugfs_create_devm_seqfile" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x546e109c, "ieee802154_register_hw" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x428a36f, "ieee802154_alloc_hw" },
	{ 0xc4142837, "seq_printf" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85b7373, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe1f074c8, "ieee802154_free_hw" },
	{ 0xa19ac719, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:adf7242");
MODULE_ALIAS("spi:adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7242");
MODULE_ALIAS("of:N*T*Cadi,adf7242C*");
MODULE_ALIAS("of:N*T*Cadi,adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7241C*");

MODULE_INFO(srcversion, "F36D910386EFC4EBDB8EBD0");
