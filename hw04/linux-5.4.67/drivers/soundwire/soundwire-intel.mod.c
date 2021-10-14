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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8556c12f, "sdw_master_read_prop" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0x34712074, "sdw_cdns_irq" },
	{ 0x6d66f1c2, "sdw_delete_bus_master" },
	{ 0xa071f2c6, "single_release" },
	{ 0xc4142837, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcf84f64e, "sdw_cdns_probe" },
	{ 0xe1ca0830, "device_get_named_child_node" },
	{ 0xbe6ff4d7, "sdw_stream_add_master" },
	{ 0xe693e1f0, "snd_soc_register_component" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdf7365ab, "sdw_add_bus_master" },
	{ 0xa76a6fcb, "sdw_cdns_thread" },
	{ 0x5ee06589, "cdns_xfer_msg" },
	{ 0xc6f36716, "cdns_xfer_msg_defer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd0df263d, "snd_soc_unregister_component" },
	{ 0xf0c18d86, "sdw_stream_remove_master" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x3adb5140, "cdns_set_sdw_stream" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7645017a, "cdns_bus_conf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x58738d38, "sdw_cdns_get_stream" },
	{ 0x5db18716, "sdw_cdns_config_stream" },
	{ 0xd63aee5a, "sdw_cdns_alloc_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xcbdee5d6, "sdw_cdns_enable_interrupt" },
	{ 0x285aa52f, "sdw_cdns_debugfs_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x544e0622, "sdw_cdns_init" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x50995f8d, "cdns_reset_page_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb8dc58e, "sdw_cdns_pdi_init" },
};

MODULE_INFO(depends, "snd-pcm,soundwire-bus,soundwire-cadence,snd-soc-core");


MODULE_INFO(srcversion, "56FA462FA754701850850D0");
