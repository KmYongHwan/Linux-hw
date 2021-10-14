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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x132c593a, "isa_unregister_driver" },
	{ 0xb0ab8c89, "isa_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x148fa2d1, "gpiochip_irqchip_add_key" },
	{ 0x6733e8b8, "handle_edge_irq" },
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "81614CF6E431407FF6CF29C");
