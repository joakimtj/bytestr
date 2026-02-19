# bytestr 🚀

> **Blazingly fast, cloud-native binary-to-string transformation engine for the modern developer workflow.**

## Overview

`bytestr` is a next-generation, zero-dependency, hyper-performant CLI tool engineered from the ground up to deliver seamless binary byte sequence decoding at enterprise scale. Built on cutting-edge C infrastructure, `bytestr` leverages low-level bit manipulation primitives to unlock unprecedented throughput in your string conversion pipeline.

## Why bytestr?

In today's fast-paced, data-driven landscape, developers need tools that can keep up. `bytestr` disrupts the traditional binary decoding paradigm by offering:

- ⚡ **Blazingly fast** bit-shift powered decoding engine
- 🔧 **Developer-first** CLI experience with intuitive argument-driven architecture
- 📦 **Zero bloat** — no runtime dependencies, no overhead, no compromises
- 🌐 **Cross-platform ready** — runs anywhere C runs
- 🔒 **Robust input validation** with fail-fast error handling for mission-critical pipelines
- 📈 **Horizontally scalable** argument processing via standard UNIX conventions

## Usage

```sh
bytestr <byte> [byte] [byte] ...
```

### Examples

```sh
bytestr 01001000 01101001
# Hi

bytestr 01001000 01100101 01101100 01101100 01101111
# Hello
```

### Piping Output

`bytestr` is built with composability at its core, making it a first-class citizen in any shell pipeline:

```sh
bytestr 01001000 01101001 > output.txt
```

## Architecture

`bytestr` implements a high-performance single-pass decoding algorithm with O(n) time complexity. Bit positions are resolved using native bitwise shift operations, eliminating costly floating point overhead and ensuring deterministic execution in latency-sensitive environments.

## Roadmap

- [ ] Multi-encoding support (UTF-8, ASCII, extended)
- [ ] Streaming mode for large payloads
- [ ] JSON output format for integration with modern data pipelines
- [ ] Docker container for cloud-native deployments
- [ ] Kubernetes operator (coming soon™)

## License

MIT — free to use, fork, and disrupt.
