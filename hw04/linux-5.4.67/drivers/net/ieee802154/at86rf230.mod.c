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
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x546e109c, "ieee802154_register_hw" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xa916b694, "strnlen" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc88d8e8e, "gpiod_set_raw_value_cansleep" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x428a36f, "ieee802154_alloc_hw" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xe1f074c8, "ieee802154_free_hw" },
	{ 0xa19ac719, "ieee802154_unregister_hw" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1530bda3, "ieee802154_wake_queue" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6c5b8787, "ieee802154_xmit_complete" },
	{ 0x54d29d1e, "ieee802154_rx_irqsafe" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x25334866, "spi_async" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "F7E407A23EA079EB04CB647");
