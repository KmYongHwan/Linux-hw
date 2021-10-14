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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x9d6c2ddb, "adf_dev_init" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3b142416, "adf_dev_stop" },
	{ 0x6c77152f, "adf_devmgr_rm_dev" },
	{ 0x5c0c439a, "adf_init_arb" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x27c528a2, "adf_dev_shutdown" },
	{ 0xa67ec802, "adf_disable_aer" },
	{ 0x3ea970cc, "adf_cfg_dev_add" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc5850110, "printk" },
	{ 0x881fe29f, "adf_isr_resource_alloc" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x820e14ae, "adf_cfg_dev_remove" },
	{ 0xa9f9cc45, "adf_disable_sriov" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xed064e22, "adf_reset_flr" },
	{ 0xf0afbd32, "adf_isr_resource_free" },
	{ 0xa121d0f1, "adf_devmgr_add_dev" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xd9146b26, "adf_dev_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4fe0acc, "adf_sriov_configure" },
	{ 0x1e171ec9, "adf_enable_aer" },
	{ 0x8d127709, "adf_send_admin_init" },
	{ 0x85cf9e5b, "adf_init_admin_comms" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x9e39b9fa, "qat_crypto_dev_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x944c43f, "node_states" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc7acabbe, "adf_devmgr_pci_to_accel_dev" },
	{ 0x40fa5d24, "adf_exit_admin_comms" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xddfde06a, "adf_exit_arb" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "intel_qat");

MODULE_ALIAS("pci:v00008086d000037C8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0D33079E547EA21CCEB703A");
