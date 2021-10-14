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
	{ 0xa2f0b887, "snd_soc_acpi_intel_hda_machines" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x4b158403, "snd_sof_pcm_period_elapsed" },
	{ 0x34403dd9, "sof_io_write" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x1fa3a80e, "hda_codec_i915_init" },
	{ 0xd085ad0, "intel_nhlt_init" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xfdfb8c47, "snd_hdac_ext_bus_get_link" },
	{ 0xcdfd2681, "snd_dma_alloc_pages" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x276ebf, "snd_hdac_ext_bus_link_put" },
	{ 0xebc7c270, "snd_sof_dsp_panic" },
	{ 0xd8526a7e, "snd_hdac_ext_link_set_stream_id" },
	{ 0xa412b03, "snd_sof_load_firmware_raw" },
	{ 0x6959a85b, "snd_hdac_ext_link_clear_stream_id" },
	{ 0xcfdc5f98, "sof_ipc_tx_message" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xda0091f6, "snd_hdac_ext_bus_get_ml_capabilities" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xc83e0b46, "snd_sof_ipc_reply" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x76ce5819, "sof_io_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x412d9c32, "snd_hdac_bus_init_cmd_io" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xb96a4e46, "sof_fw_ready" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3a0b9635, "snd_sof_pci_update_bits" },
	{ 0x8d19fb2b, "snd_sof_dsp_update_bits" },
	{ 0x76418624, "snd_hdac_bus_stop_cmd_io" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8b6e6127, "snd_sof_dsp_update_bits_unlocked" },
	{ 0xb124179d, "snd_hdac_ext_link_stream_reset" },
	{ 0x735604dd, "intel_nhlt_free" },
	{ 0x3c38d1e6, "snd_soc_dpcm_get_substream" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1bb564d1, "snd_sof_ipc_msgs_rx" },
	{ 0xcb4f74a8, "snd_hdac_ext_stream_release" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8d825529, "snd_sof_dsp_update_bits_forced" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x1a5f8358, "sof_mailbox_read" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x10f8053, "snd_hdac_ext_bus_link_power_down" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x928ce057, "sof_mailbox_write" },
	{ 0xda99aba8, "hda_codec_i915_put" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd7969a64, "sof_io_read64" },
	{ 0x574e8b84, "snd_sof_get_status" },
	{ 0x29895971, "snd_hdac_ext_stream_decouple" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f4a730a, "sof_block_write" },
	{ 0x6c2ebed7, "snd_hdac_ext_bus_exit" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5edd2a6c, "snd_dma_free_pages" },
	{ 0x7e9d509b, "hda_codec_i915_exit" },
	{ 0xcec096f4, "snd_hdac_ext_link_stream_start" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd9f56870, "snd_soc_hdac_hda_get_ops" },
	{ 0x8047800b, "snd_hdac_ext_bus_device_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x75870b9a, "snd_sgbuf_get_chunk_size" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x287223e4, "snd_hdac_link_free_all" },
	{ 0x4bab65e, "snd_hdac_ext_link_stream_setup" },
	{ 0x6f023a8b, "snd_hdac_ext_bus_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x47cebe65, "hda_codec_jack_wake_enable" },
	{ 0xedc03953, "iounmap" },
	{ 0x57774a70, "sof_io_write64" },
	{ 0x6e232ffc, "hda_codec_probe_bus" },
	{ 0x6043a2, "snd_hdac_ext_link_stream_clear" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1330c766, "snd_hdac_bus_update_rirb" },
	{ 0xfb67e2a3, "snd_soc_dai_set_tdm_slot" },
	{ 0x8d3594bb, "intel_nhlt_get_dmic_geo" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe3dd977, "snd_hdac_ext_bus_link_power_down_all" },
	{ 0xd6621b5a, "sof_block_read" },
	{ 0x45e184a4, "hda_codec_jack_check" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-pcm,snd-sof,snd-sof-intel-hda,snd-intel-nhlt,snd-hda-ext-core,snd-hda-core,snd-soc-core,snd-soc-hdac-hda");


MODULE_INFO(srcversion, "B09BEAB4B4F949638C0ADE9");
