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
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf48c92ea, "dmaengine_unmap_put" },
	{ 0x46dcb18f, "async_tx_submit" },
	{ 0xba312d7b, "current_task" },
	{ 0x2dff943a, "dmaengine_get_unmap_data" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8e57aebf, "__async_tx_find_channel" },
	{ 0x6ce4fa5c, "async_tx_quiesce" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa637b975, "dma_ops" },
};

MODULE_INFO(depends, "async_tx");


MODULE_INFO(srcversion, "6B1E7FF95EAC2758C9CD924");
