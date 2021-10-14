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
	{ 0x5ada0011, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0xbb77e50, "input_ff_create_memless" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2f24b19e, "devm_input_allocate_polled_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev,ff-memless");

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "31F1D922D1B07BD535886DA");
