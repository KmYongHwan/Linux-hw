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
	{ 0xe00365c5, "uart_unregister_driver" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x9f6dd27d, "uart_register_driver" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x238695d4, "uart_add_one_port" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xb90692f4, "uart_remove_one_port" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0xa57355c, "sched_setscheduler" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x9e26a2ea, "__kthread_init_worker" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x4d8323d2, "do_SAK" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9ac4fdd3, "uart_insert_char" },
	{ 0x1e253b77, "regmap_raw_read" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc222c8b, "uart_update_timeout" },
	{ 0x3c2271c8, "uart_get_baud_rate" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd9778c14, "uart_write_wakeup" },
	{ 0x58412e48, "regmap_raw_write" },
	{ 0xdf786131, "regcache_cache_bypass" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4b22e469, "kthread_queue_work" },
	{ 0x74a611a8, "kthread_flush_worker" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "17C090287E4439D8C84DEBE");
