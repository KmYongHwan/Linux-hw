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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0x359b08, "fwnode_graph_get_remote_port_parent" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x36bc696d, "v4l2_async_subdev_notifier_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x51ae8e57, "v4l2_async_notifier_cleanup" },
	{ 0xf83aa47b, "v4l2_async_notifier_init" },
	{ 0x5cbc2648, "fwnode_get_next_parent" },
	{ 0xb3085db3, "fwnode_device_is_available" },
	{ 0x10a7625f, "v4l2_async_notifier_add_subdev" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x3a0b2bfe, "v4l2_async_notifier_add_fwnode_subdev" },
	{ 0xefdd7c41, "is_acpi_data_node" },
	{ 0xe1397c75, "fwnode_property_read_u64_array" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0xcb2ad66a, "fwnode_graph_parse_endpoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xaa4258c0, "fwnode_get_parent" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xde724e98, "fwnode_property_get_reference_args" },
	{ 0x99ed122, "fwnode_get_next_child_node" },
	{ 0xabb69656, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0xc14688f3, "fwnode_graph_get_next_endpoint" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0x15ccab12, "fwnode_graph_get_remote_endpoint" },
	{ 0xe05883d9, "v4l2_async_notifier_unregister" },
	{ 0x9caa394e, "is_acpi_device_node" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "76874DAA410041C9A2D1AF2");
