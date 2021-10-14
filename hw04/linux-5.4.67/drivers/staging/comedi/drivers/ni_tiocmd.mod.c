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
	{ 0x783aaaef, "ni_tio_write" },
	{ 0x97fe8284, "mite_dma_arm" },
	{ 0x54ab0472, "mite_dma_disarm" },
	{ 0x7b4abc31, "ni_tio_set_gate_src_raw" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xafea1423, "ni_tio_set_gate_src" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2d3bbc0e, "ni_tio_get_soft_copy" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x72ea69ac, "mite_prep_dma" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0x9a74b6d4, "mite_ack_linkc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2687ad2a, "ni_tio_read" },
	{ 0xca5d2fcb, "comedi_buf_write_alloc" },
	{ 0x1cbbdbdb, "ni_tio_set_bits" },
	{ 0x4b989378, "mite_done" },
	{ 0x5d894ada, "ni_tio_arm" },
};

MODULE_INFO(depends, "ni_tio,mite,ni_routing,comedi");


MODULE_INFO(srcversion, "C0CBDA81FC9C6783709381C");
