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
	{ 0xf9a482f9, "msleep" },
	{ 0xe44371c8, "cw1200_irq_handler" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x640a9a12, "cw1200_core_release" },
	{ 0xc86edb79, "cw1200_can_suspend" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85b7373, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfe990052, "gpio_free" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd3640b81, "cw1200_core_probe" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "cw1200_core");


MODULE_INFO(srcversion, "186D67EF66795268C8987E0");
