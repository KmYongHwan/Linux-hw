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
	{ 0x86761b17, "agp_generic_type_to_mask_type" },
	{ 0xfd9b4e1b, "agp_generic_destroy_pages" },
	{ 0xaea7f62, "agp_generic_destroy_page" },
	{ 0x2fa2314f, "agp_generic_alloc_pages" },
	{ 0x983fc360, "agp_generic_alloc_page" },
	{ 0xbaf75e6a, "agp_generic_free_by_type" },
	{ 0x1ab34d09, "agp_generic_alloc_by_type" },
	{ 0x9ccf0f97, "agp_generic_remove_memory" },
	{ 0x26f5da40, "agp_generic_insert_memory" },
	{ 0xa87058c3, "agp_generic_free_gatt_table" },
	{ 0xe0334500, "agp_generic_create_gatt_table" },
	{ 0xa4d4f0e6, "global_cache_flush" },
	{ 0x7a286e6b, "agp_generic_mask_memory" },
	{ 0x8a7e61a7, "agp_generic_enable" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x7538b132, "agp_off" },
	{ 0x6e548889, "agp_add_bridge" },
	{ 0x6a6b5e99, "agp3_generic_tlbflush" },
	{ 0xc2424641, "agp3_generic_cleanup" },
	{ 0xde9b17ed, "agp3_generic_fetch_size" },
	{ 0x4b085dbf, "agp3_generic_configure" },
	{ 0x6d58f69e, "agp3_generic_sizes" },
	{ 0x350610ba, "get_agp_version" },
	{ 0xf0091a05, "agp_alloc_bridge" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x10f3abc5, "agp_collect_device_status" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4fe01913, "agp_put_bridge" },
	{ 0x5f0f5163, "agp_remove_bridge" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x95e38aa1, "pcibios_resource_to_bus" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x19a34a8e, "agp_bridge" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00005591sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000540sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000620sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000630sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000635sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000645sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000646sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000648sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000650sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000651sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000655sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000661sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000662sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000671sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000730sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000735sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000740sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000741sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000745sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000746sv*sd*bc06sc00i00*");

MODULE_INFO(srcversion, "0CD5490997BD7B85310A45E");
